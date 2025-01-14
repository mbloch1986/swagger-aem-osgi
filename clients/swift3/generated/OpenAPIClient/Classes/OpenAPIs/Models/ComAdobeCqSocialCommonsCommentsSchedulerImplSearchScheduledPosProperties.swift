//
// ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties: JSONEncodable {

    public var enableScheduledPostsSearch: ConfigNodePropertyBoolean?
    public var numberOfMinutes: ConfigNodePropertyInteger?
    public var maxSearchLimit: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["enableScheduledPostsSearch"] = self.enableScheduledPostsSearch?.encodeToJSON()
        nillableDictionary["numberOfMinutes"] = self.numberOfMinutes?.encodeToJSON()
        nillableDictionary["maxSearchLimit"] = self.maxSearchLimit?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

