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
 * OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties_H_
#define OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties: public OAIObject {
public:
    OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties();
    OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties(QString json);
    ~OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getOrgApacheSlingScriptingSightlyJsBindings();
    void setOrgApacheSlingScriptingSightlyJsBindings(OAIConfigNodePropertyArray* org_apache_sling_scripting_sightly_js_bindings);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* org_apache_sling_scripting_sightly_js_bindings;
    bool m_org_apache_sling_scripting_sightly_js_bindings_isSet;

};

}

#endif /* OAIOrgApacheSlingScriptingSightlyJsImplJsapiSlyBindingsValuesProvProperties_H_ */
