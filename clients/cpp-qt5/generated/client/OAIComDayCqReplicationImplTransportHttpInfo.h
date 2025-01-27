/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIComDayCqReplicationImplTransportHttpInfo.h
 *
 * 
 */

#ifndef OAIComDayCqReplicationImplTransportHttpInfo_H_
#define OAIComDayCqReplicationImplTransportHttpInfo_H_

#include <QJsonObject>


#include "OAIOAIComDayCqReplicationImplTransportHttpProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqReplicationImplTransportHttpInfo: public OAIObject {
public:
    OAIComDayCqReplicationImplTransportHttpInfo();
    OAIComDayCqReplicationImplTransportHttpInfo(QString json);
    ~OAIComDayCqReplicationImplTransportHttpInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqReplicationImplTransportHttpInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComDayCqReplicationImplTransportHttpProperties* getProperties();
    void setProperties(OAIComDayCqReplicationImplTransportHttpProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComDayCqReplicationImplTransportHttpProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComDayCqReplicationImplTransportHttpInfo_H_ */
