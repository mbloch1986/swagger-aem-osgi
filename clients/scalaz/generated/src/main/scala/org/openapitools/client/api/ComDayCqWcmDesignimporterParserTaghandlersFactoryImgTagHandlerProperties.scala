package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties._

case class ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties (
  serviceRanking: Option[ConfigNodePropertyInteger],
tagpattern: Option[ConfigNodePropertyString])

object ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerPropertiesCodecJson: CodecJson[ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties] = CodecJson.derive[ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerPropertiesDecoder: EntityDecoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties] = jsonOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties]
  implicit val ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerPropertiesEncoder: EntityEncoder[ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties] = jsonEncoderOf[ComDayCqWcmDesignimporterParserTaghandlersFactoryImgTagHandlerProperties]
}