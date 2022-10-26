#include "ApiLCSC.h"
#include "network/HttpRequest.h"

ApiLCSC::ApiLCSC()
{
}

ApiLCSC::~ApiLCSC()
{
}

void ApiLCSC::fetchCategory(){
    HttpRequest::BASE_NAME = "https://wwwapi.lcsc.com";

        // Set root certificate for your self-signed certs
        //HttpRequest::SetRootCA("../certs/rootca.crt");

        // Set JWT AuthToken for Token authentication
        HttpRequest::AuthToken = ""; // Update this after login


        // Custom header map
        QMap<QString, QString> headers;

        // Really not neccessary is this is the default content-type
        headers.insert("Accept", "application/json");

        // Initialize a new request to fetch users
        HttpRequest *request = new HttpRequest("/v1/home/category", headers);
        connect(request, &HttpRequest::jsonReady, this, [](QJsonDocument doc){
            //qDebug() << doc;
            //QJsonObject jsonObject = doc.object();
            //QJsonArray jsonArray = jsonObject[""].toArray();
            qDebug() << doc.isArray();
            if(doc.isArray()){
                QJsonArray jsonArray = doc.array();
                qDebug() << jsonArray[0];
            }
        });

        request->getJSON();
}
