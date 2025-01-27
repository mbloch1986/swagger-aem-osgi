/*
 * OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties.h
 *
 * 
 */

#ifndef _OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties_H_
#define _OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties_H_


#include <string>
#include "ConfigNodePropertyArray.h"
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

class OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties();
	OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyString getHcname();

	/*! \brief Set 
	 */
	void setHcname(ConfigNodePropertyString  hcname);
	/*! \brief Get 
	 */
	ConfigNodePropertyArray getHctags();

	/*! \brief Set 
	 */
	void setHctags(ConfigNodePropertyArray  hctags);
	/*! \brief Get 
	 */
	ConfigNodePropertyString getHcmbeanname();

	/*! \brief Set 
	 */
	void setHcmbeanname(ConfigNodePropertyString  hcmbeanname);
	/*! \brief Get 
	 */
	ConfigNodePropertyInteger getNumberOfRetriesAllowed();

	/*! \brief Set 
	 */
	void setNumberOfRetriesAllowed(ConfigNodePropertyInteger  numberOfRetriesAllowed);

private:
	ConfigNodePropertyString hcname;
	ConfigNodePropertyArray hctags;
	ConfigNodePropertyString hcmbeanname;
	ConfigNodePropertyInteger numberOfRetriesAllowed;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OrgApacheSlingDistributionMonitorDistributionQueueHealthCheckProperties_H_ */
