//
// ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialCProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialCommonsCommentsListingImplSearchCommentSocialCProperties: JSONEncodable {

    public var numUserLimit: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["numUserLimit"] = self.numUserLimit?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

