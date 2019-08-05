/*
 * ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties.h
 *
 * 
 */

#ifndef _ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties_H_
#define _ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties_H_


#include <string>
#include "ConfigNodePropertyBoolean.h"
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

class ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties();
	ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyInteger getThreshold();

	/*! \brief Set 
	 */
	void setThreshold(ConfigNodePropertyInteger  threshold);
	/*! \brief Get 
	 */
	ConfigNodePropertyString getJobTopicName();

	/*! \brief Set 
	 */
	void setJobTopicName(ConfigNodePropertyString  jobTopicName);
	/*! \brief Get 
	 */
	ConfigNodePropertyBoolean getEmailEnabled();

	/*! \brief Set 
	 */
	void setEmailEnabled(ConfigNodePropertyBoolean  emailEnabled);

private:
	ConfigNodePropertyInteger threshold;
	ConfigNodePropertyString jobTopicName;
	ConfigNodePropertyBoolean emailEnabled;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties_H_ */