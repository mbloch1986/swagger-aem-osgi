/*
 * ConfigNodePropertyBoolean.h
 *
 * 
 */

#ifndef _ConfigNodePropertyBoolean_H_
#define _ConfigNodePropertyBoolean_H_


#include <string>
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

class ConfigNodePropertyBoolean : public Object {
public:
	/*! \brief Constructor.
	 */
	ConfigNodePropertyBoolean();
	ConfigNodePropertyBoolean(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ConfigNodePropertyBoolean();

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
	bool getValue();

	/*! \brief Set Property value
	 */
	void setValue(bool  value);
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
	bool value;
	std::string description;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ConfigNodePropertyBoolean_H_ */
