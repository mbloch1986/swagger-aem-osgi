//
// OrgApacheSlingServletsGetDefaultGetServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingServletsGetDefaultGetServletProperties: JSONEncodable {
    public var aliases: ConfigNodePropertyArray?
    public var index: ConfigNodePropertyBoolean?
    public var indexFiles: ConfigNodePropertyArray?
    public var enableHtml: ConfigNodePropertyBoolean?
    public var enableJson: ConfigNodePropertyBoolean?
    public var enableTxt: ConfigNodePropertyBoolean?
    public var enableXml: ConfigNodePropertyBoolean?
    public var jsonMaximumresults: ConfigNodePropertyInteger?
    public var ecmaSuport: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["aliases"] = self.aliases?.encodeToJSON()
        nillableDictionary["index"] = self.index?.encodeToJSON()
        nillableDictionary["index.files"] = self.indexFiles?.encodeToJSON()
        nillableDictionary["enable.html"] = self.enableHtml?.encodeToJSON()
        nillableDictionary["enable.json"] = self.enableJson?.encodeToJSON()
        nillableDictionary["enable.txt"] = self.enableTxt?.encodeToJSON()
        nillableDictionary["enable.xml"] = self.enableXml?.encodeToJSON()
        nillableDictionary["json.maximumresults"] = self.jsonMaximumresults?.encodeToJSON()
        nillableDictionary["ecmaSuport"] = self.ecmaSuport?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
