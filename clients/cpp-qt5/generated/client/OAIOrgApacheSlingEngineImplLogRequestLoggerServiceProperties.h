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
 * OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties_H_
#define OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyDropDown.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties: public OAIObject {
public:
    OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties();
    OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties(QString json);
    ~OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getRequestLogServiceFormat();
    void setRequestLogServiceFormat(OAIConfigNodePropertyString* request_log_service_format);

    OAIConfigNodePropertyString* getRequestLogServiceOutput();
    void setRequestLogServiceOutput(OAIConfigNodePropertyString* request_log_service_output);

    OAIConfigNodePropertyDropDown* getRequestLogServiceOutputtype();
    void setRequestLogServiceOutputtype(OAIConfigNodePropertyDropDown* request_log_service_outputtype);

    OAIConfigNodePropertyBoolean* getRequestLogServiceOnentry();
    void setRequestLogServiceOnentry(OAIConfigNodePropertyBoolean* request_log_service_onentry);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* request_log_service_format;
    bool m_request_log_service_format_isSet;

    OAIConfigNodePropertyString* request_log_service_output;
    bool m_request_log_service_output_isSet;

    OAIConfigNodePropertyDropDown* request_log_service_outputtype;
    bool m_request_log_service_outputtype_isSet;

    OAIConfigNodePropertyBoolean* request_log_service_onentry;
    bool m_request_log_service_onentry_isSet;

};

}

#endif /* OAIOrgApacheSlingEngineImplLogRequestLoggerServiceProperties_H_ */
