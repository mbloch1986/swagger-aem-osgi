/*
 * ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties.h
 *
 * 
 */

#ifndef _ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties_H_
#define _ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties_H_


#include <string>
#include "ConfigNodePropertyBoolean.h"
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

class ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties();
	ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyBoolean getDisableSmartSync();

	/*! \brief Set 
	 */
	void setDisableSmartSync(ConfigNodePropertyBoolean  disableSmartSync);

private:
	ConfigNodePropertyBoolean disableSmartSync;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties_H_ */