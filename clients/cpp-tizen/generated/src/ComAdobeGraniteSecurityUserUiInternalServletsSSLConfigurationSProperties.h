/*
 * ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties.h
 *
 * 
 */

#ifndef _ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties_H_
#define _ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties_H_


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

class ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties();
	ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties();

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

#endif /* _ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties_H_ */
