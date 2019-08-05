/*
 * ComDayCqDamCoreImplServletAssetStatusServletProperties.h
 *
 * 
 */

#ifndef _ComDayCqDamCoreImplServletAssetStatusServletProperties_H_
#define _ComDayCqDamCoreImplServletAssetStatusServletProperties_H_


#include <string>
#include "ConfigNodePropertyInteger.h"
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

class ComDayCqDamCoreImplServletAssetStatusServletProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComDayCqDamCoreImplServletAssetStatusServletProperties();
	ComDayCqDamCoreImplServletAssetStatusServletProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComDayCqDamCoreImplServletAssetStatusServletProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyInteger getCqdambatchstatusmaxassets();

	/*! \brief Set 
	 */
	void setCqdambatchstatusmaxassets(ConfigNodePropertyInteger  cqdambatchstatusmaxassets);

private:
	ConfigNodePropertyInteger cqdambatchstatusmaxassets;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComDayCqDamCoreImplServletAssetStatusServletProperties_H_ */