#ifndef GETREQUEST_H
#define GETREQUEST_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QIODevice>
#include <QXmlStreamReader>
#include <iostream>
class QNetworkReply;
class OkdeskRequest : public QObject
{
    Q_OBJECT
public:
    OkdeskRequest();
   void requestCompaniesList();
public slots:
   void getResponse(QNetworkReply *replyNetwork);
private:
    QString apiToken = "55fbb943003c66a30caaabd803da63408afd531d";
    QString url = "https://itconsalt.okdesk.ru/api/v1/companies/list?api_token=%1";
    QNetworkAccessManager netManager;
};

#endif // GETREQUEST_H
