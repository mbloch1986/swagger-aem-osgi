//
// OrgApacheFelixEventadminImplEventAdminProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheFelixEventadminImplEventAdminProperties: JSONEncodable {
    public var orgApacheFelixEventadminThreadPoolSize: ConfigNodePropertyInteger?
    public var orgApacheFelixEventadminAsyncToSyncThreadRatio: ConfigNodePropertyFloat?
    public var orgApacheFelixEventadminTimeout: ConfigNodePropertyInteger?
    public var orgApacheFelixEventadminRequireTopic: ConfigNodePropertyBoolean?
    public var orgApacheFelixEventadminIgnoreTimeout: ConfigNodePropertyArray?
    public var orgApacheFelixEventadminIgnoreTopic: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["org.apache.felix.eventadmin.ThreadPoolSize"] = self.orgApacheFelixEventadminThreadPoolSize?.encodeToJSON()
        nillableDictionary["org.apache.felix.eventadmin.AsyncToSyncThreadRatio"] = self.orgApacheFelixEventadminAsyncToSyncThreadRatio?.encodeToJSON()
        nillableDictionary["org.apache.felix.eventadmin.Timeout"] = self.orgApacheFelixEventadminTimeout?.encodeToJSON()
        nillableDictionary["org.apache.felix.eventadmin.RequireTopic"] = self.orgApacheFelixEventadminRequireTopic?.encodeToJSON()
        nillableDictionary["org.apache.felix.eventadmin.IgnoreTimeout"] = self.orgApacheFelixEventadminIgnoreTimeout?.encodeToJSON()
        nillableDictionary["org.apache.felix.eventadmin.IgnoreTopic"] = self.orgApacheFelixEventadminIgnoreTopic?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
