//
// ComDayCqTaggingImplSearchTagPredicateEvaluatorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqTaggingImplSearchTagPredicateEvaluatorProperties: JSONEncodable {

    public var ignorePath: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["ignore_path"] = self.ignorePath?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

