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
 * OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties_H_
#define OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties: public OAIObject {
public:
    OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties();
    OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties(QString json);
    ~OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getServiceName();
    void setServiceName(OAIConfigNodePropertyString* service_name);

    OAIConfigNodePropertyString* getSlingServletResourceTypes();
    void setSlingServletResourceTypes(OAIConfigNodePropertyString* sling_servlet_resource_types);

    OAIConfigNodePropertyString* getSlingServletSelectors();
    void setSlingServletSelectors(OAIConfigNodePropertyString* sling_servlet_selectors);

    OAIConfigNodePropertyArray* getSlingServletMethods();
    void setSlingServletMethods(OAIConfigNodePropertyArray* sling_servlet_methods);

    OAIConfigNodePropertyBoolean* getFormsFormchooserservletAdvansesearchRequire();
    void setFormsFormchooserservletAdvansesearchRequire(OAIConfigNodePropertyBoolean* forms_formchooserservlet_advansesearch_require);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* service_name;
    bool m_service_name_isSet;

    OAIConfigNodePropertyString* sling_servlet_resource_types;
    bool m_sling_servlet_resource_types_isSet;

    OAIConfigNodePropertyString* sling_servlet_selectors;
    bool m_sling_servlet_selectors_isSet;

    OAIConfigNodePropertyArray* sling_servlet_methods;
    bool m_sling_servlet_methods_isSet;

    OAIConfigNodePropertyBoolean* forms_formchooserservlet_advansesearch_require;
    bool m_forms_formchooserservlet_advansesearch_require_isSet;

};

}

#endif /* OAIComDayCqWcmFoundationFormsImplFormChooserServletProperties_H_ */
