//
// ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqSocialEnablementAdaptorsEnablementLearningPathAdaptorFProperties: JSONEncodable {
    public var isMemberCheck: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["isMemberCheck"] = self.isMemberCheck?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
