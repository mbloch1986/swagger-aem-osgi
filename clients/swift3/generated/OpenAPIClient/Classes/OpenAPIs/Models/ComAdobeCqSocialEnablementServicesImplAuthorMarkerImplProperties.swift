//
// ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialEnablementServicesImplAuthorMarkerImplProperties: JSONEncodable {

    public var serviceRanking: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
