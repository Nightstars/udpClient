#pragma once
#include <QDateTime>
#include <QtWidgets/QDialog>
#include <QDialog>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QUdpSocket>
class udpclient : public QDialog
{
	Q_OBJECT

public:
	udpclient(QWidget *parent =0,Qt::WindowFlags f=0);
	~udpclient();
public slots:
	void CloseBtnClicked();
	void dataReceived();
private:
	QTextEdit * ReceiveTextEdit;
	QPushButton *CloseBtn;
	QVBoxLayout *mainLayout;
	int port;
	QUdpSocket *udpSocket;
	QDateTime *time;
};
