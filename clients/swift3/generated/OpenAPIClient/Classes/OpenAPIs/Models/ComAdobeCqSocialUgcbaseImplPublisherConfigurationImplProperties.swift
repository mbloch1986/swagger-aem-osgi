//
// ComAdobeCqSocialUgcbaseImplPublisherConfigurationImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialUgcbaseImplPublisherConfigurationImplProperties: JSONEncodable {

    public var isPrimaryPublisher: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["isPrimaryPublisher"] = self.isPrimaryPublisher?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

