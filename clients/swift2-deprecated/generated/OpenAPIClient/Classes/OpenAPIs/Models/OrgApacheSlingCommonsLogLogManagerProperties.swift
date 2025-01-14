//
// OrgApacheSlingCommonsLogLogManagerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingCommonsLogLogManagerProperties: JSONEncodable {
    public var orgApacheSlingCommonsLogLevel: ConfigNodePropertyDropDown?
    public var orgApacheSlingCommonsLogFile: ConfigNodePropertyString?
    public var orgApacheSlingCommonsLogFileNumber: ConfigNodePropertyInteger?
    public var orgApacheSlingCommonsLogFileSize: ConfigNodePropertyString?
    public var orgApacheSlingCommonsLogPattern: ConfigNodePropertyString?
    public var orgApacheSlingCommonsLogConfigurationFile: ConfigNodePropertyString?
    public var orgApacheSlingCommonsLogPackagingDataEnabled: ConfigNodePropertyBoolean?
    public var orgApacheSlingCommonsLogMaxCallerDataDepth: ConfigNodePropertyInteger?
    public var orgApacheSlingCommonsLogMaxOldFileCountInDump: ConfigNodePropertyInteger?
    public var orgApacheSlingCommonsLogNumOfLines: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["org.apache.sling.commons.log.level"] = self.orgApacheSlingCommonsLogLevel?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.file"] = self.orgApacheSlingCommonsLogFile?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.file.number"] = self.orgApacheSlingCommonsLogFileNumber?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.file.size"] = self.orgApacheSlingCommonsLogFileSize?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.pattern"] = self.orgApacheSlingCommonsLogPattern?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.configurationFile"] = self.orgApacheSlingCommonsLogConfigurationFile?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.packagingDataEnabled"] = self.orgApacheSlingCommonsLogPackagingDataEnabled?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.maxCallerDataDepth"] = self.orgApacheSlingCommonsLogMaxCallerDataDepth?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.maxOldFileCountInDump"] = self.orgApacheSlingCommonsLogMaxOldFileCountInDump?.encodeToJSON()
        nillableDictionary["org.apache.sling.commons.log.numOfLines"] = self.orgApacheSlingCommonsLogNumOfLines?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
