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
 * OAIOrgApacheSlingResourcemergerPickerOverridingProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingResourcemergerPickerOverridingProperties_H_
#define OAIOrgApacheSlingResourcemergerPickerOverridingProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingResourcemergerPickerOverridingProperties: public OAIObject {
public:
    OAIOrgApacheSlingResourcemergerPickerOverridingProperties();
    OAIOrgApacheSlingResourcemergerPickerOverridingProperties(QString json);
    ~OAIOrgApacheSlingResourcemergerPickerOverridingProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingResourcemergerPickerOverridingProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyString* getMergeRoot();
    void setMergeRoot(OAIConfigNodePropertyString* merge_root);

    OAIConfigNodePropertyBoolean* getMergeReadOnly();
    void setMergeReadOnly(OAIConfigNodePropertyBoolean* merge_read_only);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyString* merge_root;
    bool m_merge_root_isSet;

    OAIConfigNodePropertyBoolean* merge_read_only;
    bool m_merge_read_only_isSet;

};

}

#endif /* OAIOrgApacheSlingResourcemergerPickerOverridingProperties_H_ */
