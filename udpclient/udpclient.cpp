#include "udpclient.h"
#include <QMessageBox>
#include <QHostAddress>
udpclient::udpclient(QWidget *parent,Qt::WindowFlags f)
	: QDialog(parent,f)
{
	setWindowTitle(tr("UDP Client"));
	ReceiveTextEdit = new QTextEdit(this);
	//ReceiveTextEdit->setEnabled(false);
	time = new QDateTime();
	ReceiveTextEdit->setFocusPolicy(Qt::NoFocus);
	CloseBtn = new QPushButton(tr(" close"), this);
	mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(ReceiveTextEdit);
	mainLayout->addWidget(CloseBtn);
	connect(CloseBtn, SIGNAL(clicked()), this, SLOT(CloseBtnclicked()));
	port = 5555;
	udpSocket = new QUdpSocket(this);
	connect(udpSocket, SIGNAL(readyRead()), this, SLOT(dataReceived()));
	bool result = udpSocket->bind(port);
	if (!result)
	{
		QMessageBox::information(this, tr("error"), tr("udp socket create error!"));
		return; 
	}
}
udpclient::~udpclient()
{

}
void udpclient::CloseBtnClicked()
{
	close();
}
void udpclient::dataReceived()
{
	while (udpSocket->hasPendingDatagrams())
	{
		QByteArray datagram;
		datagram.resize(udpSocket->pendingDatagramSize());
		udpSocket->readDatagram(datagram.data(), datagram.size());
		QString msg = datagram.data();
		ReceiveTextEdit->insertPlainText(msg+"\n");
	}
}
