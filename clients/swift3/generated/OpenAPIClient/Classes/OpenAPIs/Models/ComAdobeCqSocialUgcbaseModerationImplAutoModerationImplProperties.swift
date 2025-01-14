//
// ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties: JSONEncodable {

    public var automoderationSequence: ConfigNodePropertyArray?
    public var automoderationOnfailurestop: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["automoderation.sequence"] = self.automoderationSequence?.encodeToJSON()
        nillableDictionary["automoderation.onfailurestop"] = self.automoderationOnfailurestop?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

