//
// ComAdobeCqHistoryImplHistoryRequestFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqHistoryImplHistoryRequestFilterProperties: JSONEncodable {

    public var historyRequestFilterExcludedSelectors: ConfigNodePropertyArray?
    public var historyRequestFilterExcludedExtensions: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["history.requestFilter.excludedSelectors"] = self.historyRequestFilterExcludedSelectors?.encodeToJSON()
        nillableDictionary["history.requestFilter.excludedExtensions"] = self.historyRequestFilterExcludedExtensions?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

