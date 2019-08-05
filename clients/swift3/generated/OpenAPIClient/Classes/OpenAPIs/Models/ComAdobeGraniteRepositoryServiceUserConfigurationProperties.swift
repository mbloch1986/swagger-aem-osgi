//
// ComAdobeGraniteRepositoryServiceUserConfigurationProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteRepositoryServiceUserConfigurationProperties: JSONEncodable {

    public var serviceRanking: ConfigNodePropertyInteger?
    public var serviceusersSimpleSubjectPopulation: ConfigNodePropertyBoolean?
    public var serviceusersList: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()
        nillableDictionary["serviceusers.simpleSubjectPopulation"] = self.serviceusersSimpleSubjectPopulation?.encodeToJSON()
        nillableDictionary["serviceusers.list"] = self.serviceusersList?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
