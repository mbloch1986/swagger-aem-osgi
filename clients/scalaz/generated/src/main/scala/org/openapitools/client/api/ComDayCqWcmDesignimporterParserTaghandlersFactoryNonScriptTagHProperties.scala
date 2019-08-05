package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties._

case class ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties (
  serviceRanking: Option[ConfigNodePropertyInteger],
tagpattern: Option[ConfigNodePropertyString])

object ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHPropertiesCodecJson: CodecJson[ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties] = CodecJson.derive[ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHPropertiesDecoder: EntityDecoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties] = jsonOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHPropertiesEncoder: EntityEncoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties] = jsonEncoderOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryNonScriptTagHProperties]
}