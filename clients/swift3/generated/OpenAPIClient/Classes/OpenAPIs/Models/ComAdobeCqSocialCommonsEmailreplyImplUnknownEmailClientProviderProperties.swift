//
// ComAdobeCqSocialCommonsEmailreplyImplUnknownEmailClientProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialCommonsEmailreplyImplUnknownEmailClientProviderProperties: JSONEncodable {

    public var replyEmailPatterns: ConfigNodePropertyArray?
    public var priorityOrder: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["replyEmailPatterns"] = self.replyEmailPatterns?.encodeToJSON()
        nillableDictionary["priorityOrder"] = self.priorityOrder?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
