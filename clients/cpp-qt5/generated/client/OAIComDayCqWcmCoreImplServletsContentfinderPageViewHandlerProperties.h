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
 * OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties_H_
#define OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties();
    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties(QString json);
    ~OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getGuessTotal();
    void setGuessTotal(OAIConfigNodePropertyString* guess_total);

    OAIConfigNodePropertyBoolean* getTagTitleSearch();
    void setTagTitleSearch(OAIConfigNodePropertyBoolean* tag_title_search);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* guess_total;
    bool m_guess_total_isSet;

    OAIConfigNodePropertyBoolean* tag_title_search;
    bool m_tag_title_search_isSet;

};

}

#endif /* OAIComDayCqWcmCoreImplServletsContentfinderPageViewHandlerProperties_H_ */
