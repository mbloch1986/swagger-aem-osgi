//
// OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties: JSONEncodable {
    public var orgApacheSlingCommonsLogLevel: ConfigNodePropertyDropDown?
    public var orgApacheSlingCommonsLogFile: ConfigNodePropertyString?
    public var orgApacheSlingCommonsLogPattern: ConfigNodePropertyString?
    public var orgApacheSlingCommonsLogNames: ConfigNodePropertyArray?
    public var orgApacheSlingCommonsLogAdditiv: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["org.apache.sling.commons.log.level"] = self.orgApacheSlingCommonsLogLevel?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.file"] = self.orgApacheSlingCommonsLogFile?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.pattern"] = self.orgApacheSlingCommonsLogPattern?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.names"] = self.orgApacheSlingCommonsLogNames?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.additiv"] = self.orgApacheSlingCommonsLogAdditiv?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
