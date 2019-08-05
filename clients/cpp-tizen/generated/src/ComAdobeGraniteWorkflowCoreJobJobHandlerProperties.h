/*
 * ComAdobeGraniteWorkflowCoreJobJobHandlerProperties.h
 *
 * 
 */

#ifndef _ComAdobeGraniteWorkflowCoreJobJobHandlerProperties_H_
#define _ComAdobeGraniteWorkflowCoreJobJobHandlerProperties_H_


#include <string>
#include "ConfigNodePropertyArray.h"
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

class ComAdobeGraniteWorkflowCoreJobJobHandlerProperties : public Object {
public:
	/*! \brief Constructor.
	 */
	ComAdobeGraniteWorkflowCoreJobJobHandlerProperties();
	ComAdobeGraniteWorkflowCoreJobJobHandlerProperties(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ComAdobeGraniteWorkflowCoreJobJobHandlerProperties();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ConfigNodePropertyArray getJobtopics();

	/*! \brief Set 
	 */
	void setJobtopics(ConfigNodePropertyArray  jobtopics);
	/*! \brief Get 
	 */
	ConfigNodePropertyBoolean getAllowselfprocesstermination();

	/*! \brief Set 
	 */
	void setAllowselfprocesstermination(ConfigNodePropertyBoolean  allowselfprocesstermination);

private:
	ConfigNodePropertyArray jobtopics;
	ConfigNodePropertyBoolean allowselfprocesstermination;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ComAdobeGraniteWorkflowCoreJobJobHandlerProperties_H_ */
