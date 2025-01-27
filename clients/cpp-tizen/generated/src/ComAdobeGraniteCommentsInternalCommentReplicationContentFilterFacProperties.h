/*
 * ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties.h
 *
 * 
 */

#ifndef _ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties_H_
#define _ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties_H_


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

class ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties();
	ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyArray getReplicatecommentresourceTypes();

	/*! \brief Set 
	 */
	void setReplicatecommentresourceTypes(ConfigNodePropertyArray  replicatecommentresourceTypes);

private:
	ConfigNodePropertyArray replicatecommentresourceTypes;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComAdobeGraniteCommentsInternalCommentReplicationContentFilterFacProperties_H_ */
