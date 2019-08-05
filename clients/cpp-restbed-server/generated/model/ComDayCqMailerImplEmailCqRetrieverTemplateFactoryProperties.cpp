/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties()
{
    
}

ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::~ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties()
{
}

std::string ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailEmbed() const
{
    return m_Mailer_email_embed;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailEmbed(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Mailer_email_embed = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailCharset() const
{
    return m_Mailer_email_charset;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailCharset(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Mailer_email_charset = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailRetrieverUserID() const
{
    return m_Mailer_email_retrieverUserID;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailRetrieverUserID(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Mailer_email_retrieverUserID = value;
}
std::shared_ptr<ConfigNodePropertyString> ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::getMailerEmailRetrieverUserPWD() const
{
    return m_Mailer_email_retrieverUserPWD;
}
void ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties::setMailerEmailRetrieverUserPWD(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Mailer_email_retrieverUserPWD = value;
}

}
}
}
}
