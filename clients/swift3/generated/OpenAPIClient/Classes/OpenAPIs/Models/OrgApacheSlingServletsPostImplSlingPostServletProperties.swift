//
// OrgApacheSlingServletsPostImplSlingPostServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingServletsPostImplSlingPostServletProperties: JSONEncodable {

    public var servletPostDateFormats: ConfigNodePropertyArray?
    public var servletPostNodeNameHints: ConfigNodePropertyArray?
    public var servletPostNodeNameMaxLength: ConfigNodePropertyInteger?
    public var servletPostCheckinNewVersionableNodes: ConfigNodePropertyBoolean?
    public var servletPostAutoCheckout: ConfigNodePropertyBoolean?
    public var servletPostAutoCheckin: ConfigNodePropertyBoolean?
    public var servletPostIgnorePattern: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["servlet.post.dateFormats"] = self.servletPostDateFormats?.encodeToJSON()
        nillableDictionary["servlet.post.nodeNameHints"] = self.servletPostNodeNameHints?.encodeToJSON()
        nillableDictionary["servlet.post.nodeNameMaxLength"] = self.servletPostNodeNameMaxLength?.encodeToJSON()
        nillableDictionary["servlet.post.checkinNewVersionableNodes"] = self.servletPostCheckinNewVersionableNodes?.encodeToJSON()
        nillableDictionary["servlet.post.autoCheckout"] = self.servletPostAutoCheckout?.encodeToJSON()
        nillableDictionary["servlet.post.autoCheckin"] = self.servletPostAutoCheckin?.encodeToJSON()
        nillableDictionary["servlet.post.ignorePattern"] = self.servletPostIgnorePattern?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

