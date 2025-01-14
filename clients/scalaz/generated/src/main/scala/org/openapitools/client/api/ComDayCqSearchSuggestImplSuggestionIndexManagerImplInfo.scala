package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo._

case class ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties])

object ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo {
  import DateTimeCodecs._

  implicit val ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfoCodecJson: CodecJson[ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo] = CodecJson.derive[ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo]
  implicit val ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfoDecoder: EntityDecoder[ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo] = jsonOf[ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo]
  implicit val ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfoEncoder: EntityEncoder[ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo] = jsonEncoderOf[ComDayCqSearchSuggestImplSuggestionIndexManagerImplInfo]
}
