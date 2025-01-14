//
// ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties: JSONEncodable {

    public var pathBuilderTarget: ConfigNodePropertyString?
    public var suggestBasepath: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["pathBuilder.target"] = self.pathBuilderTarget?.encodeToJSON()
        nillableDictionary["suggest.basepath"] = self.suggestBasepath?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

