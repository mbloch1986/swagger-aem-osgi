/*
 * ConfigNodePropertyArray.h
 *
 * 
 */

#ifndef _ConfigNodePropertyArray_H_
#define _ConfigNodePropertyArray_H_


#include <string>
#include <list>
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

class ConfigNodePropertyArray : public Object {
public:
	/*! \brief Constructor.
	 */
	ConfigNodePropertyArray();
	ConfigNodePropertyArray(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ConfigNodePropertyArray();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get property name
	 */
	std::string getName();

	/*! \brief Set property name
	 */
	void setName(std::string  name);
	/*! \brief Get True if optional
	 */
	bool getOptional();

	/*! \brief Set True if optional
	 */
	void setOptional(bool  optional);
	/*! \brief Get True if property is set
	 */
	bool getIsSet();

	/*! \brief Set True if property is set
	 */
	void setIsSet(bool  is_set);
	/*! \brief Get Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)
	 */
	int getType();

	/*! \brief Set Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)
	 */
	void setType(int  type);
	/*! \brief Get Property value
	 */
	std::list<std::string> getValues();

	/*! \brief Set Property value
	 */
	void setValues(std::list <std::string> values);
	/*! \brief Get Property description
	 */
	std::string getDescription();

	/*! \brief Set Property description
	 */
	void setDescription(std::string  description);

private:
	std::string name;
	bool optional;
	bool is_set;
	int type;
	std::list <std::string>values;
	std::string description;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ConfigNodePropertyArray_H_ */
