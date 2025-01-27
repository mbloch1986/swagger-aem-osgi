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
 * OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties_H_
#define OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties: public OAIObject {
public:
    OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties();
    OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties(QString json);
    ~OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyBoolean* getIsMemberCheck();
    void setIsMemberCheck(OAIConfigNodePropertyBoolean* is_member_check);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyBoolean* is_member_check;
    bool m_is_member_check_isSet;

};

}

#endif /* OAIComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties_H_ */
