/*
 * ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties.h
 *
 * 
 */

#ifndef _ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties_H_
#define _ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties_H_


#include <string>
#include "ConfigNodePropertyArray.h"
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

class ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties();
	ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyArray getHctags();

	/*! \brief Set 
	 */
	void setHctags(ConfigNodePropertyArray  hctags);

private:
	ConfigNodePropertyArray hctags;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComAdobeGraniteRequestsLoggingImplHcRequestsStatusHealthCheckImProperties_H_ */