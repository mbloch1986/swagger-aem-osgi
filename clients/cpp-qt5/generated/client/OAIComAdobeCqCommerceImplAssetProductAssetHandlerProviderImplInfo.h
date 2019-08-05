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
 * OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo.h
 *
 * 
 */

#ifndef OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo_H_
#define OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo_H_

#include <QJsonObject>


#include "OAIOAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo: public OAIObject {
public:
    OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo();
    OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo(QString json);
    ~OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo* fromJson(QString jsonString) override;

    QString* getPid();
    void setPid(QString* pid);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getDescription();
    void setDescription(QString* description);

    OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties* getProperties();
    void setProperties(OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties* properties);


    virtual bool isSet() override;

private:
    QString* pid;
    bool m_pid_isSet;

    QString* title;
    bool m_title_isSet;

    QString* description;
    bool m_description_isSet;

    OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties* properties;
    bool m_properties_isSet;

};

}

#endif /* OAIComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplInfo_H_ */