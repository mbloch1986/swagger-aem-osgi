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



#include "ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties.h"

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

ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties()
{
    
}

ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::~ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties()
{
}

std::string ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::getFormsFormparagraphpostprocessorEnabled() const
{
    return m_Forms_formparagraphpostprocessor_enabled;
}
void ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::setFormsFormparagraphpostprocessorEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Forms_formparagraphpostprocessor_enabled = value;
}
std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::getFormsFormparagraphpostprocessorFormresourcetypes() const
{
    return m_Forms_formparagraphpostprocessor_formresourcetypes;
}
void ComDayCqWcmFoundationFormsImplFormParagraphPostProcessorProperties::setFormsFormparagraphpostprocessorFormresourcetypes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Forms_formparagraphpostprocessor_formresourcetypes = value;
}

}
}
}
}

