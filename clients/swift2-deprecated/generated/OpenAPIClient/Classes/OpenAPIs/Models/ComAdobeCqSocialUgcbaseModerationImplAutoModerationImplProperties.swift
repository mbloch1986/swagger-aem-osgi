//
// ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties: JSONEncodable {
    public var automoderationSequence: ConfigNodePropertyArray?
    public var automoderationOnfailurestop: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["automoderation.sequence"] = self.automoderationSequence?.encodeToJSON()
        nillableDictionary["automoderation.onfailurestop"] = self.automoderationOnfailurestop?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
