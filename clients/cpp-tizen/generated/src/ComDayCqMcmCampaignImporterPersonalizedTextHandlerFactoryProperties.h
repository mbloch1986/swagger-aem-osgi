/*
 * ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties.h
 *
 * 
 */

#ifndef _ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties_H_
#define _ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties_H_


#include <string>
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties();
	ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyInteger getServiceranking();

	/*! \brief Set 
	 */
	void setServiceranking(ConfigNodePropertyInteger  serviceranking);
	/*! \brief Get 
	 */
	ConfigNodePropertyString getTagpattern();

	/*! \brief Set 
	 */
	void setTagpattern(ConfigNodePropertyString  tagpattern);

private:
	ConfigNodePropertyInteger serviceranking;
	ConfigNodePropertyString tagpattern;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties_H_ */
