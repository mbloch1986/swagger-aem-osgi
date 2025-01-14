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
 * OAIComDayCqDamCoreImplServletResourceCollectionServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqDamCoreImplServletResourceCollectionServletProperties_H_
#define OAIComDayCqDamCoreImplServletResourceCollectionServletProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqDamCoreImplServletResourceCollectionServletProperties: public OAIObject {
public:
    OAIComDayCqDamCoreImplServletResourceCollectionServletProperties();
    OAIComDayCqDamCoreImplServletResourceCollectionServletProperties(QString json);
    ~OAIComDayCqDamCoreImplServletResourceCollectionServletProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqDamCoreImplServletResourceCollectionServletProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getSlingServletResourceTypes();
    void setSlingServletResourceTypes(OAIConfigNodePropertyArray* sling_servlet_resource_types);

    OAIConfigNodePropertyString* getSlingServletMethods();
    void setSlingServletMethods(OAIConfigNodePropertyString* sling_servlet_methods);

    OAIConfigNodePropertyString* getSlingServletSelectors();
    void setSlingServletSelectors(OAIConfigNodePropertyString* sling_servlet_selectors);

    OAIConfigNodePropertyString* getDownloadConfig();
    void setDownloadConfig(OAIConfigNodePropertyString* download_config);

    OAIConfigNodePropertyString* getViewSelector();
    void setViewSelector(OAIConfigNodePropertyString* view_selector);

    OAIConfigNodePropertyBoolean* getSendEmail();
    void setSendEmail(OAIConfigNodePropertyBoolean* send_email);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* sling_servlet_resource_types;
    bool m_sling_servlet_resource_types_isSet;

    OAIConfigNodePropertyString* sling_servlet_methods;
    bool m_sling_servlet_methods_isSet;

    OAIConfigNodePropertyString* sling_servlet_selectors;
    bool m_sling_servlet_selectors_isSet;

    OAIConfigNodePropertyString* download_config;
    bool m_download_config_isSet;

    OAIConfigNodePropertyString* view_selector;
    bool m_view_selector_isSet;

    OAIConfigNodePropertyBoolean* send_email;
    bool m_send_email_isSet;

};

}

#endif /* OAIComDayCqDamCoreImplServletResourceCollectionServletProperties_H_ */
