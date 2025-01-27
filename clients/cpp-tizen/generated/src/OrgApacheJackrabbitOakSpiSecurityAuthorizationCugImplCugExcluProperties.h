/*
 * OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties.h
 *
 * 
 */

#ifndef _OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties_H_
#define _OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties_H_


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

class OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties();
	OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyArray getPrincipalNames();

	/*! \brief Set 
	 */
	void setPrincipalNames(ConfigNodePropertyArray  principalNames);

private:
	ConfigNodePropertyArray principalNames;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties_H_ */
