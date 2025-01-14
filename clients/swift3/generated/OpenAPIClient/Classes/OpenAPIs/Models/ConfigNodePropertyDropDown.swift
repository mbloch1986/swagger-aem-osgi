//
// ConfigNodePropertyDropDown.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ConfigNodePropertyDropDown: JSONEncodable {

    /** property name */
    public var name: String?
    /** True if optional */
    public var _optional: Bool?
    /** True if property is set */
    public var isSet: Bool?
    public var type: ConfigNodePropertyDropDownType?
    /** Property value */
    public var value: Any?
    /** Property description */
    public var description: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name
        nillableDictionary["optional"] = self._optional
        nillableDictionary["is_set"] = self.isSet
        nillableDictionary["type"] = self.type?.encodeToJSON()
        nillableDictionary["value"] = self.value
        nillableDictionary["description"] = self.description

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

