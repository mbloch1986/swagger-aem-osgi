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
 * OAIComDayCqWcmFoundationFormsImplMailServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmFoundationFormsImplMailServletProperties_H_
#define OAIComDayCqWcmFoundationFormsImplMailServletProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmFoundationFormsImplMailServletProperties: public OAIObject {
public:
    OAIComDayCqWcmFoundationFormsImplMailServletProperties();
    OAIComDayCqWcmFoundationFormsImplMailServletProperties(QString json);
    ~OAIComDayCqWcmFoundationFormsImplMailServletProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmFoundationFormsImplMailServletProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getSlingServletResourceTypes();
    void setSlingServletResourceTypes(OAIConfigNodePropertyString* sling_servlet_resource_types);

    OAIConfigNodePropertyString* getSlingServletSelectors();
    void setSlingServletSelectors(OAIConfigNodePropertyString* sling_servlet_selectors);

    OAIConfigNodePropertyArray* getResourceWhitelist();
    void setResourceWhitelist(OAIConfigNodePropertyArray* resource_whitelist);

    OAIConfigNodePropertyString* getResourceBlacklist();
    void setResourceBlacklist(OAIConfigNodePropertyString* resource_blacklist);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* sling_servlet_resource_types;
    bool m_sling_servlet_resource_types_isSet;

    OAIConfigNodePropertyString* sling_servlet_selectors;
    bool m_sling_servlet_selectors_isSet;

    OAIConfigNodePropertyArray* resource_whitelist;
    bool m_resource_whitelist_isSet;

    OAIConfigNodePropertyString* resource_blacklist;
    bool m_resource_blacklist_isSet;

};

}

#endif /* OAIComDayCqWcmFoundationFormsImplMailServletProperties_H_ */