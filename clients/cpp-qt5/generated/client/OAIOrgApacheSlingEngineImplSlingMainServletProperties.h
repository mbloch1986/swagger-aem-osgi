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
 * OAIOrgApacheSlingEngineImplSlingMainServletProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingEngineImplSlingMainServletProperties_H_
#define OAIOrgApacheSlingEngineImplSlingMainServletProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingEngineImplSlingMainServletProperties: public OAIObject {
public:
    OAIOrgApacheSlingEngineImplSlingMainServletProperties();
    OAIOrgApacheSlingEngineImplSlingMainServletProperties(QString json);
    ~OAIOrgApacheSlingEngineImplSlingMainServletProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingEngineImplSlingMainServletProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getSlingMaxCalls();
    void setSlingMaxCalls(OAIConfigNodePropertyInteger* sling_max_calls);

    OAIConfigNodePropertyInteger* getSlingMaxInclusions();
    void setSlingMaxInclusions(OAIConfigNodePropertyInteger* sling_max_inclusions);

    OAIConfigNodePropertyBoolean* getSlingTraceAllow();
    void setSlingTraceAllow(OAIConfigNodePropertyBoolean* sling_trace_allow);

    OAIConfigNodePropertyInteger* getSlingMaxRecordRequests();
    void setSlingMaxRecordRequests(OAIConfigNodePropertyInteger* sling_max_record_requests);

    OAIConfigNodePropertyArray* getSlingStorePatternRequests();
    void setSlingStorePatternRequests(OAIConfigNodePropertyArray* sling_store_pattern_requests);

    OAIConfigNodePropertyString* getSlingServerinfo();
    void setSlingServerinfo(OAIConfigNodePropertyString* sling_serverinfo);

    OAIConfigNodePropertyArray* getSlingAdditionalResponseHeaders();
    void setSlingAdditionalResponseHeaders(OAIConfigNodePropertyArray* sling_additional_response_headers);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* sling_max_calls;
    bool m_sling_max_calls_isSet;

    OAIConfigNodePropertyInteger* sling_max_inclusions;
    bool m_sling_max_inclusions_isSet;

    OAIConfigNodePropertyBoolean* sling_trace_allow;
    bool m_sling_trace_allow_isSet;

    OAIConfigNodePropertyInteger* sling_max_record_requests;
    bool m_sling_max_record_requests_isSet;

    OAIConfigNodePropertyArray* sling_store_pattern_requests;
    bool m_sling_store_pattern_requests_isSet;

    OAIConfigNodePropertyString* sling_serverinfo;
    bool m_sling_serverinfo_isSet;

    OAIConfigNodePropertyArray* sling_additional_response_headers;
    bool m_sling_additional_response_headers_isSet;

};

}

#endif /* OAIOrgApacheSlingEngineImplSlingMainServletProperties_H_ */
