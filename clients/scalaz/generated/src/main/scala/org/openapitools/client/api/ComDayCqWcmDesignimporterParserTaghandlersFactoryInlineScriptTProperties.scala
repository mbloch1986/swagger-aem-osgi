package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties._

case class ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties (
  serviceRanking: Option[ConfigNodePropertyInteger],
tagpattern: Option[ConfigNodePropertyString])

object ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTPropertiesCodecJson: CodecJson[ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties] = CodecJson.derive[ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTPropertiesDecoder: EntityDecoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties] = jsonOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTPropertiesEncoder: EntityEncoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties] = jsonEncoderOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryInlineScriptTProperties]
}
