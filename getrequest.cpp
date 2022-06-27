#include "getrequest.h"

OkdeskRequest::OkdeskRequest()
{
    connect(&netManager, &QNetworkAccessManager::finished, this, &OkdeskRequest::getResponse);
}

void OkdeskRequest::requestCompaniesList()
{
    netManager.get(QNetworkRequest(url.arg(apiToken)));

}

void OkdeskRequest::getResponse(QNetworkReply *replyNetwork)
{
    if (replyNetwork->error() == QNetworkReply::NoError){
        QByteArray response(replyNetwork->readAll());
        QXmlStreamReader xml(response);
        while (!xml.atEnd()){
            xml.readNext();
            std::cout << xml.tokenString().toStdString() << std::endl;
        }
        std::cout << response.length() << std::endl;
    }else {
        std::cout << "Error :" <<replyNetwork->error() << std::endl;
    }
}
