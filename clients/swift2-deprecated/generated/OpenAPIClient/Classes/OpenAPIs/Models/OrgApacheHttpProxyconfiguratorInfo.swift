//
// OrgApacheHttpProxyconfiguratorInfo.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheHttpProxyconfiguratorInfo: JSONEncodable {
    public var pid: String?
    public var title: String?
    public var description: String?
    public var properties: OrgApacheHttpProxyconfiguratorProperties?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["pid"] = self.pid
        nillableDictionary["title"] = self.title
        nillableDictionary["description"] = self.description
        nillableDictionary["properties"] = self.properties?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
