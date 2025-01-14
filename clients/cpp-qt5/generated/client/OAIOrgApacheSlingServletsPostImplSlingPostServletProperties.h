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
 * OAIOrgApacheSlingServletsPostImplSlingPostServletProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheSlingServletsPostImplSlingPostServletProperties_H_
#define OAIOrgApacheSlingServletsPostImplSlingPostServletProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyInteger.h"
#include "OAIOAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheSlingServletsPostImplSlingPostServletProperties: public OAIObject {
public:
    OAIOrgApacheSlingServletsPostImplSlingPostServletProperties();
    OAIOrgApacheSlingServletsPostImplSlingPostServletProperties(QString json);
    ~OAIOrgApacheSlingServletsPostImplSlingPostServletProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrgApacheSlingServletsPostImplSlingPostServletProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getServletPostDateFormats();
    void setServletPostDateFormats(OAIConfigNodePropertyArray* servlet_post_date_formats);

    OAIConfigNodePropertyArray* getServletPostNodeNameHints();
    void setServletPostNodeNameHints(OAIConfigNodePropertyArray* servlet_post_node_name_hints);

    OAIConfigNodePropertyInteger* getServletPostNodeNameMaxLength();
    void setServletPostNodeNameMaxLength(OAIConfigNodePropertyInteger* servlet_post_node_name_max_length);

    OAIConfigNodePropertyBoolean* getServletPostCheckinNewVersionableNodes();
    void setServletPostCheckinNewVersionableNodes(OAIConfigNodePropertyBoolean* servlet_post_checkin_new_versionable_nodes);

    OAIConfigNodePropertyBoolean* getServletPostAutoCheckout();
    void setServletPostAutoCheckout(OAIConfigNodePropertyBoolean* servlet_post_auto_checkout);

    OAIConfigNodePropertyBoolean* getServletPostAutoCheckin();
    void setServletPostAutoCheckin(OAIConfigNodePropertyBoolean* servlet_post_auto_checkin);

    OAIConfigNodePropertyString* getServletPostIgnorePattern();
    void setServletPostIgnorePattern(OAIConfigNodePropertyString* servlet_post_ignore_pattern);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* servlet_post_date_formats;
    bool m_servlet_post_date_formats_isSet;

    OAIConfigNodePropertyArray* servlet_post_node_name_hints;
    bool m_servlet_post_node_name_hints_isSet;

    OAIConfigNodePropertyInteger* servlet_post_node_name_max_length;
    bool m_servlet_post_node_name_max_length_isSet;

    OAIConfigNodePropertyBoolean* servlet_post_checkin_new_versionable_nodes;
    bool m_servlet_post_checkin_new_versionable_nodes_isSet;

    OAIConfigNodePropertyBoolean* servlet_post_auto_checkout;
    bool m_servlet_post_auto_checkout_isSet;

    OAIConfigNodePropertyBoolean* servlet_post_auto_checkin;
    bool m_servlet_post_auto_checkin_isSet;

    OAIConfigNodePropertyString* servlet_post_ignore_pattern;
    bool m_servlet_post_ignore_pattern_isSet;

};

}

#endif /* OAIOrgApacheSlingServletsPostImplSlingPostServletProperties_H_ */
